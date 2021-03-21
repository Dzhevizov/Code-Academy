/*Даден e xsd файл и два xml файла. Необходимо е да се напише програма, 
която валидира двата xml файла, дали отговарят на описанието в xsd файла. 
Ако валидацията е успешна, да се сравняват двата xml файл и се изведат разликите в тях (xml-diff).*/

#define LIBXML_SCHEMAS_ENABLED
#include <libxml/xmlschemastypes.h>
#include <libxml/xmlversion.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    xmlDocPtr doc1, doc2;
    xmlSchemaPtr schema = NULL;
    xmlSchemaParserCtxtPtr ctxt;
    char *XMLFileName1 = "test1.xml";
    char *XMLFileName2 = "test2.xml";
    char *XSDFileName = "test.xsd";

    xmlLineNumbersDefault(1);

    ctxt = xmlSchemaNewParserCtxt(XSDFileName);

    xmlSchemaSetParserErrors(ctxt, (xmlSchemaValidityErrorFunc)fprintf, (xmlSchemaValidityWarningFunc)fprintf, stderr);
    schema = xmlSchemaParse(ctxt);
    xmlSchemaFreeParserCtxt(ctxt);

    doc1 = xmlReadFile(XMLFileName1, NULL, 0);
    doc2 = xmlReadFile(XMLFileName2, NULL, 0);

    if (doc1 == NULL)
    {
        fprintf(stderr, "Could not parse %s\n", XMLFileName1);
    }
    else
    {
        xmlSchemaValidCtxtPtr ctxt;
        int ret;

        ctxt = xmlSchemaNewValidCtxt(schema);
        xmlSchemaSetValidErrors(ctxt, (xmlSchemaValidityErrorFunc)fprintf, (xmlSchemaValidityWarningFunc)fprintf, stderr);
        ret = xmlSchemaValidateDoc(ctxt, doc1);
        if (ret == 0)
        {
            printf("%s validates\n", XMLFileName1);
        }
        else if (ret > 0)
        {
            printf("%s fails to validate\n", XMLFileName1);
        }
        else
        {
            printf("%s validation generated an internal error\n", XMLFileName1);
        }
        xmlSchemaFreeValidCtxt(ctxt);
        xmlFreeDoc(doc1);
    }

    if (doc2 == NULL)
    {
        fprintf(stderr, "Could not parse %s\n", XMLFileName2);
    }
    else
    {
        xmlSchemaValidCtxtPtr ctxt;
        int ret;

        ctxt = xmlSchemaNewValidCtxt(schema);
        xmlSchemaSetValidErrors(ctxt, (xmlSchemaValidityErrorFunc)fprintf, (xmlSchemaValidityWarningFunc)fprintf, stderr);
        ret = xmlSchemaValidateDoc(ctxt, doc2);
        if (ret == 0)
        {
            printf("%s validates\n", XMLFileName2);
        }
        else if (ret > 0)
        {
            printf("%s fails to validate\n", XMLFileName2);
        }
        else
        {
            printf("%s validation generated an internal error\n", XMLFileName2);
        }
        xmlSchemaFreeValidCtxt(ctxt);
        xmlFreeDoc(doc2);
    }

    if (schema != NULL)
        xmlSchemaFree(schema);

    xmlSchemaCleanupTypes();
    xmlCleanupParser();
    xmlMemoryDump();
    
    /*Компилира се с командата: gcc -I/usr/include/libxml project.c -lxml2 -o xmlvalid
    ./xmlvalid test.xsd test1.xml test2.xml*/
    
    /*След валидирането на двата xml файла за извеждане на разликите в тях се използва командата:
    diff test1.xml test2.xml*/

    return (0);
}
