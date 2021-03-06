/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Christian Stocker <chregu@php.net>                          |
   |          Rob Richards <rrichards@php.net>                            |
   +----------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#if HAVE_LIBXML && HAVE_DOM
#include "php_dom.h"

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_attribute, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_attribute, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_remove_attribute, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_attribute_node, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_attribute_node, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, newAttr, DOMAttr, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_remove_attribute_node, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, oldAttr, DOMAttr, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_elements_by_tag_name, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_attribute_ns, 0, 0, 2)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_attribute_ns, 0, 0, 3)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, qualifiedName)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_remove_attribute_ns, 0, 0, 2)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_attribute_node_ns, 0, 0, 2)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_attribute_node_ns, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, newAttr, DOMAttr, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_get_elements_by_tag_name_ns, 0, 0, 2)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_has_attribute, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_has_attribute_ns, 0, 0, 2)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_id_attribute, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, isId)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_id_attribute_ns, 0, 0, 3)
	ZEND_ARG_INFO(0, namespaceURI)
	ZEND_ARG_INFO(0, localName)
	ZEND_ARG_INFO(0, isId)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_set_id_attribute_node, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, attr, DOMAttr, 0)
	ZEND_ARG_INFO(0, isId)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_element_construct, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO();
/* }}} */

/*
* class DOMElement extends DOMNode
*
* URL: https://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-745549614
* Since:
*/

const zend_function_entry php_dom_element_class_functions[] = { /* {{{ */
	PHP_FALIAS(getAttribute, dom_element_get_attribute, arginfo_dom_element_get_attribute)
	PHP_FALIAS(setAttribute, dom_element_set_attribute, arginfo_dom_element_set_attribute)
	PHP_FALIAS(removeAttribute, dom_element_remove_attribute, arginfo_dom_element_remove_attribute)
	PHP_FALIAS(getAttributeNode, dom_element_get_attribute_node, arginfo_dom_element_get_attribute_node)
	PHP_FALIAS(setAttributeNode, dom_element_set_attribute_node, arginfo_dom_element_set_attribute_node)
	PHP_FALIAS(removeAttributeNode, dom_element_remove_attribute_node, arginfo_dom_element_remove_attribute_node)
	PHP_FALIAS(getElementsByTagName, dom_element_get_elements_by_tag_name, arginfo_dom_element_get_elements_by_tag_name)
	PHP_FALIAS(getAttributeNS, dom_element_get_attribute_ns, arginfo_dom_element_get_attribute_ns)
	PHP_FALIAS(setAttributeNS, dom_element_set_attribute_ns, arginfo_dom_element_set_attribute_ns)
	PHP_FALIAS(removeAttributeNS, dom_element_remove_attribute_ns, arginfo_dom_element_remove_attribute_ns)
	PHP_FALIAS(getAttributeNodeNS, dom_element_get_attribute_node_ns, arginfo_dom_element_get_attribute_node_ns)
	PHP_FALIAS(setAttributeNodeNS, dom_element_set_attribute_node_ns, arginfo_dom_element_set_attribute_node_ns)
	PHP_FALIAS(getElementsByTagNameNS, dom_element_get_elements_by_tag_name_ns, arginfo_dom_element_get_elements_by_tag_name_ns)
	PHP_FALIAS(hasAttribute, dom_element_has_attribute, arginfo_dom_element_has_attribute)
	PHP_FALIAS(hasAttributeNS, dom_element_has_attribute_ns, arginfo_dom_element_has_attribute_ns)
	PHP_FALIAS(setIdAttribute, dom_element_set_id_attribute, arginfo_dom_element_set_id_attribute)
	PHP_FALIAS(setIdAttributeNS, dom_element_set_id_attribute_ns, arginfo_dom_element_set_id_attribute_ns)
	PHP_FALIAS(setIdAttributeNode, dom_element_set_id_attribute_node, arginfo_dom_element_set_id_attribute_node)
	PHP_ME(domelement, __construct, arginfo_dom_element_construct, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
/* }}} */

/* {{{ proto DOMElement::__construct(string name, [string value], [string uri]) */
PHP_METHOD(domelement, __construct)
{
	xmlNodePtr nodep = NULL, oldnode = NULL;
	dom_object *intern;
	char *name, *value = NULL, *uri = NULL;
	char *localname = NULL, *prefix = NULL;
	int errorcode = 0;
	size_t name_len, value_len = 0, uri_len = 0;
	int name_valid;
	xmlNsPtr nsptr = NULL;

	if (zend_parse_parameters_throw(ZEND_NUM_ARGS(), "s|s!s", &name, &name_len, &value, &value_len, &uri, &uri_len) == FAILURE) {
		return;
	}

	name_valid = xmlValidateName((xmlChar *) name, 0);
	if (name_valid != 0) {
		php_dom_throw_error(INVALID_CHARACTER_ERR, 1);
		RETURN_FALSE;
	}

	/* Namespace logic is separate and only when uri passed in to insure no BC breakage */
	if (uri_len > 0) {
		errorcode = dom_check_qname(name, &localname, &prefix, uri_len, name_len);
		if (errorcode == 0) {
			nodep = xmlNewNode (NULL, (xmlChar *)localname);
			if (nodep != NULL && uri != NULL) {
				nsptr = dom_get_ns(nodep, uri, &errorcode, prefix);
				xmlSetNs(nodep, nsptr);
			}
		}
		xmlFree(localname);
		if (prefix != NULL) {
			xmlFree(prefix);
		}
		if (errorcode != 0) {
			if (nodep != NULL) {
				xmlFreeNode(nodep);
			}
			php_dom_throw_error(errorcode, 1);
			RETURN_FALSE;
		}
	} else {
	    /* If you don't pass a namespace uri, then you can't set a prefix */
	    localname = (char *) xmlSplitQName2((xmlChar *) name, (xmlChar **) &prefix);
	    if (prefix != NULL) {
			xmlFree(localname);
			xmlFree(prefix);
	        php_dom_throw_error(NAMESPACE_ERR, 1);
	        RETURN_FALSE;
	    }
		nodep = xmlNewNode(NULL, (xmlChar *) name);
	}

	if (!nodep) {
		php_dom_throw_error(INVALID_STATE_ERR, 1);
		RETURN_FALSE;
	}

	if (value_len > 0) {
		xmlNodeSetContentLen(nodep, (xmlChar *) value, value_len);
	}

	intern = Z_DOMOBJ_P(ZEND_THIS);
	oldnode = dom_object_get_node(intern);
	if (oldnode != NULL) {
		php_libxml_node_free_resource(oldnode );
	}
	php_libxml_increment_node_ptr((php_libxml_node_object *)intern, nodep, (void *)intern);
}
/* }}} end DOMElement::__construct */

/* {{{ tagName	string
readonly=yes
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-104682815
Since:
*/
int dom_element_tag_name_read(dom_object *obj, zval *retval)
{
	xmlNodePtr nodep;
	xmlNsPtr ns;
	xmlChar *qname;

	nodep = dom_object_get_node(obj);

	if (nodep == NULL) {
		php_dom_throw_error(INVALID_STATE_ERR, 0);
		return FAILURE;
	}

	ns = nodep->ns;
	if (ns != NULL && ns->prefix) {
		qname = xmlStrdup(ns->prefix);
		qname = xmlStrcat(qname, (xmlChar *)":");
		qname = xmlStrcat(qname, nodep->name);
		ZVAL_STRING(retval, (char *)qname);
		xmlFree(qname);
	} else {
		ZVAL_STRING(retval, (char *) nodep->name);
	}

	return SUCCESS;
}

/* }}} */

/* {{{ schemaTypeInfo	typeinfo
readonly=yes
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#Element-schemaTypeInfo
Since: DOM Level 3
*/
int dom_element_schema_type_info_read(dom_object *obj, zval *retval)
{
	ZVAL_NULL(retval);
	return SUCCESS;
}

/* }}} */

static xmlNodePtr dom_get_dom1_attribute(xmlNodePtr elem, xmlChar *name) /* {{{ */
{
    int len;
    const xmlChar *nqname;

	nqname = xmlSplitQName3(name, &len);
	if (nqname != NULL) {
		xmlNsPtr ns;
		xmlChar *prefix = xmlStrndup(name, len);
		if (prefix && xmlStrEqual(prefix, (xmlChar *)"xmlns")) {
			ns = elem->nsDef;
			while (ns) {
				if (xmlStrEqual(ns->prefix, nqname)) {
					break;
				}
				ns = ns->next;
			}
			xmlFree(prefix);
			return (xmlNodePtr)ns;
		}
		ns = xmlSearchNs(elem->doc, elem, prefix);
		if (prefix != NULL) {
			xmlFree(prefix);
		}
		if (ns != NULL) {
			return (xmlNodePtr)xmlHasNsProp(elem, nqname, ns->href);
		}
	} else {
		if (xmlStrEqual(name, (xmlChar *)"xmlns")) {
			xmlNsPtr nsPtr = elem->nsDef;
			while (nsPtr) {
				if (nsPtr->prefix == NULL) {
					return (xmlNodePtr)nsPtr;
				}
				nsPtr = nsPtr->next;
			}
			return NULL;
		}
	}
	return (xmlNodePtr)xmlHasNsProp(elem, name, NULL);
}
/* }}} */

/* {{{ proto string dom_element_get_attribute(string name);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-666EE0F9
Since:
*/
PHP_FUNCTION(dom_element_get_attribute)
{
	zval *id;
	xmlNode *nodep;
	char *name;
	xmlChar *value = NULL;
	dom_object *intern;
	xmlNodePtr attr;
	size_t name_len;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	attr = dom_get_dom1_attribute(nodep, (xmlChar *)name);
	if (attr) {
		switch (attr->type) {
			case XML_ATTRIBUTE_NODE:
				value = xmlNodeListGetString(attr->doc, attr->children, 1);
				break;
			case XML_NAMESPACE_DECL:
				value = xmlStrdup(((xmlNsPtr)attr)->href);
				break;
			default:
				value = xmlStrdup(((xmlAttributePtr)attr)->defaultValue);
		}
	}

	if (value == NULL) {
		RETURN_EMPTY_STRING();
	} else {
		RETVAL_STRING((char *)value);
		xmlFree(value);
	}
}
/* }}} end dom_element_get_attribute */

/* {{{ proto void dom_element_set_attribute(string name, string value);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-F68F082
Since:
*/
PHP_FUNCTION(dom_element_set_attribute)
{
	zval *id;
	xmlNode *nodep;
	xmlNodePtr attr = NULL;
	int ret, name_valid;
	size_t name_len, value_len;
	dom_object *intern;
	char *name, *value;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "ss", &name, &name_len, &value, &value_len) == FAILURE) {
		return;
	}

	if (name_len == 0) {
		php_error_docref(NULL, E_WARNING, "Attribute Name is required");
		RETURN_FALSE;
	}

	name_valid = xmlValidateName((xmlChar *) name, 0);
	if (name_valid != 0) {
		php_dom_throw_error(INVALID_CHARACTER_ERR, 1);
		RETURN_FALSE;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	attr = dom_get_dom1_attribute(nodep, (xmlChar *)name);
	if (attr != NULL) {
		switch (attr->type) {
			case XML_ATTRIBUTE_NODE:
				node_list_unlink(attr->children);
				break;
			case XML_NAMESPACE_DECL:
				RETURN_FALSE;
			default:
				break;
		}

	}

	if (xmlStrEqual((xmlChar *)name, (xmlChar *)"xmlns")) {
		if (xmlNewNs(nodep, (xmlChar *)value, NULL)) {
			RETURN_TRUE;
		}
	} else {
		attr = (xmlNodePtr)xmlSetProp(nodep, (xmlChar *) name, (xmlChar *)value);
	}
	if (!attr) {
		php_error_docref(NULL, E_WARNING, "No such attribute '%s'", name);
		RETURN_FALSE;
	}

	DOM_RET_OBJ(attr, &ret, intern);

}
/* }}} end dom_element_set_attribute */

/* {{{ proto void dom_element_remove_attribute(string name);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-6D6AC0F9
Since:
*/
PHP_FUNCTION(dom_element_remove_attribute)
{
	zval *id;
	xmlNodePtr nodep, attrp;
	dom_object *intern;
	size_t name_len;
	char *name;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	attrp = dom_get_dom1_attribute(nodep, (xmlChar *)name);
	if (attrp == NULL) {
		RETURN_FALSE;
	}

	switch (attrp->type) {
		case XML_ATTRIBUTE_NODE:
			if (php_dom_object_get_data(attrp) == NULL) {
			node_list_unlink(attrp->children);
				xmlUnlinkNode(attrp);
				xmlFreeProp((xmlAttrPtr)attrp);
		} else {
				xmlUnlinkNode(attrp);
		}
			break;
		case XML_NAMESPACE_DECL:
			RETURN_FALSE;
		default:
			break;
	}

	RETURN_TRUE;
}
/* }}} end dom_element_remove_attribute */

/* {{{ proto DOMAttr dom_element_get_attribute_node(string name);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-217A91B8
Since:
*/
PHP_FUNCTION(dom_element_get_attribute_node)
{
	zval *id;
	xmlNodePtr nodep, attrp;
	size_t name_len;
	int ret;
	dom_object *intern;
	char *name;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	attrp = dom_get_dom1_attribute(nodep, (xmlChar *)name);
	if (attrp == NULL) {
		RETURN_FALSE;
	}

	if (attrp->type == XML_NAMESPACE_DECL) {
		xmlNsPtr curns;
		xmlNodePtr nsparent;

		nsparent = attrp->_private;
		curns = xmlNewNs(NULL, attrp->name, NULL);
		if (attrp->children) {
			curns->prefix = xmlStrdup((xmlChar *) attrp->children);
		}
		if (attrp->children) {
			attrp = xmlNewDocNode(nodep->doc, NULL, (xmlChar *) attrp->children, attrp->name);
		} else {
			attrp = xmlNewDocNode(nodep->doc, NULL, (xmlChar *)"xmlns", attrp->name);
		}
		attrp->type = XML_NAMESPACE_DECL;
		attrp->parent = nsparent;
		attrp->ns = curns;
	}

	DOM_RET_OBJ((xmlNodePtr) attrp, &ret, intern);
}
/* }}} end dom_element_get_attribute_node */

/* {{{ proto DOMAttr dom_element_set_attribute_node(DOMAttr newAttr);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-887236154
Since:
*/
PHP_FUNCTION(dom_element_set_attribute_node)
{
	zval *id, *node;
	xmlNode *nodep;
	xmlAttr *attrp, *existattrp = NULL;
	dom_object *intern, *attrobj, *oldobj;
	int ret;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "O", &node, dom_attr_class_entry) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	DOM_GET_OBJ(attrp, node, xmlAttrPtr, attrobj);

	if (attrp->type != XML_ATTRIBUTE_NODE) {
		php_error_docref(NULL, E_WARNING, "Attribute node is required");
		RETURN_FALSE;
	}

	if (!(attrp->doc == NULL || attrp->doc == nodep->doc)) {
		php_dom_throw_error(WRONG_DOCUMENT_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	existattrp = xmlHasProp(nodep, attrp->name);
	if (existattrp != NULL && existattrp->type != XML_ATTRIBUTE_DECL) {
		if ((oldobj = php_dom_object_get_data((xmlNodePtr) existattrp)) != NULL &&
			((php_libxml_node_ptr *)oldobj->ptr)->node == (xmlNodePtr) attrp)
		{
			RETURN_NULL();
		}
		xmlUnlinkNode((xmlNodePtr) existattrp);
	}

	if (attrp->parent != NULL) {
		xmlUnlinkNode((xmlNodePtr) attrp);
	}

	if (attrp->doc == NULL && nodep->doc != NULL) {
		attrobj->document = intern->document;
		php_libxml_increment_doc_ref((php_libxml_node_object *)attrobj, NULL);
	}

	xmlAddChild(nodep, (xmlNodePtr) attrp);

	/* Returns old property if removed otherwise NULL */
	if (existattrp != NULL) {
		DOM_RET_OBJ((xmlNodePtr) existattrp, &ret, intern);
	} else {
		RETVAL_NULL();
	}

}
/* }}} end dom_element_set_attribute_node */

/* {{{ proto DOMAttr dom_element_remove_attribute_node(DOMAttr oldAttr);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-D589198
Since:
*/
PHP_FUNCTION(dom_element_remove_attribute_node)
{
	zval *id, *node;
	xmlNode *nodep;
	xmlAttr *attrp;
	dom_object *intern, *attrobj;
	int ret;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "O", &node, dom_attr_class_entry) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	DOM_GET_OBJ(attrp, node, xmlAttrPtr, attrobj);

	if (attrp->type != XML_ATTRIBUTE_NODE || attrp->parent != nodep) {
		php_dom_throw_error(NOT_FOUND_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	xmlUnlinkNode((xmlNodePtr) attrp);

	DOM_RET_OBJ((xmlNodePtr) attrp, &ret, intern);

}
/* }}} end dom_element_remove_attribute_node */

/* {{{ proto DOMNodeList dom_element_get_elements_by_tag_name(string name);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-1938918D
Since:
*/
PHP_FUNCTION(dom_element_get_elements_by_tag_name)
{
	zval *id;
	xmlNodePtr elemp;
	size_t name_len;
	dom_object *intern, *namednode;
	char *name;
	xmlChar *local;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	php_dom_create_interator(return_value, DOM_NODELIST);
	namednode = Z_DOMOBJ_P(return_value);
	local = xmlCharStrndup(name, name_len);
	dom_namednode_iter(intern, 0, namednode, NULL, local, NULL);
}
/* }}} end dom_element_get_elements_by_tag_name */

/* {{{ proto string dom_element_get_attribute_ns(string namespaceURI, string localName);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElGetAttrNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_get_attribute_ns)
{
	zval *id;
	xmlNodePtr elemp;
	xmlNsPtr nsptr;
	dom_object *intern;
	size_t uri_len = 0, name_len = 0;
	char *uri, *name;
	xmlChar *strattr;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s!s", &uri, &uri_len, &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	strattr = xmlGetNsProp(elemp, (xmlChar *) name, (xmlChar *) uri);

	if (strattr != NULL) {
		RETVAL_STRING((char *)strattr);
		xmlFree(strattr);
	} else {
		if (xmlStrEqual((xmlChar *) uri, (xmlChar *)DOM_XMLNS_NAMESPACE)) {
			nsptr = dom_get_nsdecl(elemp, (xmlChar *)name);
			if (nsptr != NULL) {
				RETVAL_STRING((char *) nsptr->href);
			} else {
				RETVAL_EMPTY_STRING();
			}
		} else {
			RETVAL_EMPTY_STRING();
		}
	}

}
/* }}} end dom_element_get_attribute_ns */

static xmlNsPtr _dom_new_reconNs(xmlDocPtr doc, xmlNodePtr tree, xmlNsPtr ns) /* {{{ */
{
    xmlNsPtr def;
    xmlChar prefix[50];
    int counter = 1;

	if ((tree == NULL) || (ns == NULL) || (ns->type != XML_NAMESPACE_DECL)) {
		return NULL;
	}

	/* Code taken from libxml2 (2.6.20) xmlNewReconciliedNs
	 *
	 * Find a close prefix which is not already in use.
	 * Let's strip namespace prefixes longer than 20 chars !
	 */
	if (ns->prefix == NULL)
		snprintf((char *) prefix, sizeof(prefix), "default");
	else
		snprintf((char *) prefix, sizeof(prefix), "%.20s", (char *)ns->prefix);

	def = xmlSearchNs(doc, tree, prefix);
	while (def != NULL) {
		if (counter > 1000) return(NULL);
		if (ns->prefix == NULL)
			snprintf((char *) prefix, sizeof(prefix), "default%d", counter++);
		else
			snprintf((char *) prefix, sizeof(prefix), "%.20s%d",
			(char *)ns->prefix, counter++);
		def = xmlSearchNs(doc, tree, prefix);
	}

	/*
	 * OK, now we are ready to create a new one.
	 */
	def = xmlNewNs(tree, ns->href, prefix);
	return(def);
}
/* }}} */

/* {{{ proto void dom_element_set_attribute_ns(string namespaceURI, string qualifiedName, string value);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElSetAttrNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_set_attribute_ns)
{
	zval *id;
	xmlNodePtr elemp, nodep = NULL;
	xmlNsPtr nsptr;
	xmlAttr *attr;
	size_t uri_len = 0, name_len = 0, value_len = 0;
	char *uri, *name, *value;
	char *localname = NULL, *prefix = NULL;
	dom_object *intern;
	int errorcode = 0, stricterror, is_xmlns = 0, name_valid;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s!ss", &uri, &uri_len, &name, &name_len, &value, &value_len) == FAILURE) {
		return;
	}

	if (name_len == 0) {
		php_error_docref(NULL, E_WARNING, "Attribute Name is required");
		RETURN_FALSE;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	stricterror = dom_get_strict_error(intern->document);

	if (dom_node_is_read_only(elemp) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, stricterror);
		RETURN_NULL();
	}

	errorcode = dom_check_qname(name, &localname, &prefix, uri_len, name_len);

	if (errorcode == 0) {
		if (uri_len > 0) {
			nodep = (xmlNodePtr) xmlHasNsProp(elemp, (xmlChar *) localname, (xmlChar *) uri);
			if (nodep != NULL && nodep->type != XML_ATTRIBUTE_DECL) {
				node_list_unlink(nodep->children);
			}

			if ((xmlStrEqual((xmlChar *) prefix, (xmlChar *)"xmlns") ||
				(prefix == NULL && xmlStrEqual((xmlChar *) localname, (xmlChar *)"xmlns"))) &&
				xmlStrEqual((xmlChar *) uri, (xmlChar *)DOM_XMLNS_NAMESPACE)) {
				is_xmlns = 1;
				if (prefix == NULL) {
					nsptr = dom_get_nsdecl(elemp, NULL);
				} else {
					nsptr = dom_get_nsdecl(elemp, (xmlChar *)localname);
				}
			} else {
				nsptr = xmlSearchNsByHref(elemp->doc, elemp, (xmlChar *)uri);
				if (nsptr && nsptr->prefix == NULL) {
					xmlNsPtr tmpnsptr;

					tmpnsptr = nsptr->next;
					while (tmpnsptr) {
						if ((tmpnsptr->prefix != NULL) && (tmpnsptr->href != NULL) &&
							(xmlStrEqual(tmpnsptr->href, (xmlChar *) uri))) {
							nsptr = tmpnsptr;
							break;
						}
						tmpnsptr = tmpnsptr->next;
					}
					if (tmpnsptr == NULL) {
						nsptr = _dom_new_reconNs(elemp->doc, elemp, nsptr);
					}
				}
			}

			if (nsptr == NULL) {
				if (prefix == NULL) {
					if (is_xmlns == 1) {
						xmlNewNs(elemp, (xmlChar *)value, NULL);
						xmlReconciliateNs(elemp->doc, elemp);
					} else {
						errorcode = NAMESPACE_ERR;
					}
				} else {
					if (is_xmlns == 1) {
						xmlNewNs(elemp, (xmlChar *)value, (xmlChar *)localname);
					} else {
						nsptr = dom_get_ns(elemp, uri, &errorcode, prefix);
					}
					xmlReconciliateNs(elemp->doc, elemp);
				}
			} else {
				if (is_xmlns == 1) {
					if (nsptr->href) {
						xmlFree((xmlChar *) nsptr->href);
					}
					nsptr->href = xmlStrdup((xmlChar *)value);
				}
			}

			if (errorcode == 0 && is_xmlns == 0) {
				xmlSetNsProp(elemp, nsptr, (xmlChar *)localname, (xmlChar *)value);
			}
		} else {
			name_valid = xmlValidateName((xmlChar *) localname, 0);
			if (name_valid != 0) {
				errorcode = INVALID_CHARACTER_ERR;
				stricterror = 1;
			} else {
				attr = xmlHasProp(elemp, (xmlChar *)localname);
				if (attr != NULL && attr->type != XML_ATTRIBUTE_DECL) {
					node_list_unlink(attr->children);
				}
				xmlSetProp(elemp, (xmlChar *)localname, (xmlChar *)value);
			}
		}
	}

	xmlFree(localname);
	if (prefix != NULL) {
		xmlFree(prefix);
	}

	if (errorcode != 0) {
		php_dom_throw_error(errorcode, stricterror);
	}

	RETURN_NULL();
}
/* }}} end dom_element_set_attribute_ns */

/* {{{ proto void dom_element_remove_attribute_ns(string namespaceURI, string localName);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElRemAtNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_remove_attribute_ns)
{
	zval *id;
	xmlNode *nodep;
	xmlAttr *attrp;
	xmlNsPtr nsptr;
	dom_object *intern;
	size_t name_len, uri_len;
	char *name, *uri;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s!s", &uri, &uri_len, &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_NULL();
	}

	attrp = xmlHasNsProp(nodep, (xmlChar *)name, (xmlChar *)uri);

	nsptr = dom_get_nsdecl(nodep, (xmlChar *)name);
	if (nsptr != NULL) {
		if (xmlStrEqual((xmlChar *)uri, nsptr->href)) {
			if (nsptr->href != NULL) {
				xmlFree((char *) nsptr->href);
				nsptr->href = NULL;
			}
			if (nsptr->prefix != NULL) {
				xmlFree((char *) nsptr->prefix);
				nsptr->prefix = NULL;
			}
		} else {
			RETURN_NULL();
		}
	}

	if (attrp && attrp->type != XML_ATTRIBUTE_DECL) {
		if (php_dom_object_get_data((xmlNodePtr) attrp) == NULL) {
			node_list_unlink(attrp->children);
			xmlUnlinkNode((xmlNodePtr) attrp);
			xmlFreeProp(attrp);
		} else {
			xmlUnlinkNode((xmlNodePtr) attrp);
		}
	}

	RETURN_NULL();
}
/* }}} end dom_element_remove_attribute_ns */

/* {{{ proto DOMAttr dom_element_get_attribute_node_ns(string namespaceURI, string localName);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElGetAtNodeNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_get_attribute_node_ns)
{
	zval *id;
	xmlNodePtr elemp, fakeAttrp;
	xmlAttrPtr attrp;
	dom_object *intern;
	size_t uri_len, name_len;
	int ret;
	char *uri, *name;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s!s", &uri, &uri_len, &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	attrp = xmlHasNsProp(elemp, (xmlChar *)name, (xmlChar *)uri);

	if (attrp == NULL) {
		if (xmlStrEqual((xmlChar *) uri, (xmlChar *)DOM_XMLNS_NAMESPACE)) {
			xmlNsPtr nsptr;
			nsptr = dom_get_nsdecl(elemp, (xmlChar *)name);
			if (nsptr != NULL) {
				xmlNsPtr curns;
				curns = xmlNewNs(NULL, nsptr->href, NULL);
				if (nsptr->prefix) {
					curns->prefix = xmlStrdup((xmlChar *) nsptr->prefix);
				}
				if (nsptr->prefix) {
					fakeAttrp = xmlNewDocNode(elemp->doc, NULL, (xmlChar *) nsptr->prefix, nsptr->href);
				} else {
					fakeAttrp = xmlNewDocNode(elemp->doc, NULL, (xmlChar *)"xmlns", nsptr->href);
				}
				fakeAttrp->type = XML_NAMESPACE_DECL;
				fakeAttrp->parent = elemp;
				fakeAttrp->ns = curns;

				DOM_RET_OBJ(fakeAttrp, &ret, intern);
			} else {
				RETURN_NULL();
			}
		} else {
		   RETURN_NULL();
		}
	} else {
		DOM_RET_OBJ((xmlNodePtr) attrp, &ret, intern);
	}

}
/* }}} end dom_element_get_attribute_node_ns */

/* {{{ proto DOMAttr dom_element_set_attribute_node_ns(DOMAttr newAttr);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElSetAtNodeNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_set_attribute_node_ns)
{
	zval *id, *node;
	xmlNode *nodep;
	xmlNs *nsp;
	xmlAttr *attrp, *existattrp = NULL;
	dom_object *intern, *attrobj, *oldobj;
	int ret;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "O", &node, dom_attr_class_entry) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

	DOM_GET_OBJ(attrp, node, xmlAttrPtr, attrobj);

	if (attrp->type != XML_ATTRIBUTE_NODE) {
		php_error_docref(NULL, E_WARNING, "Attribute node is required");
		RETURN_FALSE;
	}

	if (!(attrp->doc == NULL || attrp->doc == nodep->doc)) {
		php_dom_throw_error(WRONG_DOCUMENT_ERR, dom_get_strict_error(intern->document));
		RETURN_FALSE;
	}

    nsp = attrp->ns;
    if (nsp != NULL) {
        existattrp = xmlHasNsProp(nodep, nsp->href, attrp->name);
    } else {
        existattrp = xmlHasProp(nodep, attrp->name);
    }

	if (existattrp != NULL && existattrp->type != XML_ATTRIBUTE_DECL) {
		if ((oldobj = php_dom_object_get_data((xmlNodePtr) existattrp)) != NULL &&
			((php_libxml_node_ptr *)oldobj->ptr)->node == (xmlNodePtr) attrp)
		{
			RETURN_NULL();
		}
		xmlUnlinkNode((xmlNodePtr) existattrp);
	}

	if (attrp->parent != NULL) {
		xmlUnlinkNode((xmlNodePtr) attrp);
	}

	if (attrp->doc == NULL && nodep->doc != NULL) {
		attrobj->document = intern->document;
		php_libxml_increment_doc_ref((php_libxml_node_object *)attrobj, NULL);
	}

	xmlAddChild(nodep, (xmlNodePtr) attrp);

	/* Returns old property if removed otherwise NULL */
	if (existattrp != NULL) {
		DOM_RET_OBJ((xmlNodePtr) existattrp, &ret, intern);
	} else {
		RETVAL_NULL();
	}

}
/* }}} end dom_element_set_attribute_node_ns */

/* {{{ proto DOMNodeList dom_element_get_elements_by_tag_name_ns(string namespaceURI, string localName);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-A6C90942
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_get_elements_by_tag_name_ns)
{
	zval *id;
	xmlNodePtr elemp;
	size_t uri_len, name_len;
	dom_object *intern, *namednode;
	char *uri, *name;
	xmlChar *local, *nsuri;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "ss", &uri, &uri_len, &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	php_dom_create_interator(return_value, DOM_NODELIST);
	namednode = Z_DOMOBJ_P(return_value);
	local = xmlCharStrndup(name, name_len);
	nsuri = xmlCharStrndup(uri, uri_len);
	dom_namednode_iter(intern, 0, namednode, NULL, local, nsuri);

}
/* }}} end dom_element_get_elements_by_tag_name_ns */

/* {{{ proto bool dom_element_has_attribute(string name);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElHasAttr
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_has_attribute)
{
	zval *id;
	xmlNode *nodep;
	dom_object *intern;
	char *name;
	size_t name_len;
	xmlNodePtr attr;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	attr = dom_get_dom1_attribute(nodep, (xmlChar *)name);
	if (attr == NULL) {
		RETURN_FALSE;
	} else {
		RETURN_TRUE;
	}
}
/* }}} end dom_element_has_attribute */

/* {{{ proto bool dom_element_has_attribute_ns(string namespaceURI, string localName);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElHasAttrNS
Since: DOM Level 2
*/
PHP_FUNCTION(dom_element_has_attribute_ns)
{
	zval *id;
	xmlNodePtr elemp;
	xmlNs *nsp;
	dom_object *intern;
	size_t uri_len, name_len;
	char *uri, *name;
	xmlChar *value;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s!s", &uri, &uri_len, &name, &name_len) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	value = xmlGetNsProp(elemp, (xmlChar *)name, (xmlChar *)uri);

	if (value != NULL) {
		xmlFree(value);
		RETURN_TRUE;
	} else {
		if (xmlStrEqual((xmlChar *)uri, (xmlChar *)DOM_XMLNS_NAMESPACE)) {
			nsp = dom_get_nsdecl(elemp, (xmlChar *)name);
			if (nsp != NULL) {
				RETURN_TRUE;
			}
		}
	}

	RETURN_FALSE;
}
/* }}} end dom_element_has_attribute_ns */

static void php_set_attribute_id(xmlAttrPtr attrp, zend_bool is_id) /* {{{ */
{
	if (is_id == 1 && attrp->atype != XML_ATTRIBUTE_ID) {
		xmlChar *id_val;

		id_val = xmlNodeListGetString(attrp->doc, attrp->children, 1);
		if (id_val != NULL) {
			xmlAddID(NULL, attrp->doc, id_val, attrp);
			xmlFree(id_val);
		}
	} else if (is_id == 0 && attrp->atype == XML_ATTRIBUTE_ID) {
		xmlRemoveID(attrp->doc, attrp);
		attrp->atype = 0;
	}
}
/* }}} */

/* {{{ proto void dom_element_set_id_attribute(string name, bool isId);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElSetIdAttr
Since: DOM Level 3
*/
PHP_FUNCTION(dom_element_set_id_attribute)
{
	zval *id;
	xmlNode *nodep;
	xmlAttrPtr attrp;
	dom_object *intern;
	char *name;
	size_t name_len;
	zend_bool is_id;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "sb", &name, &name_len, &is_id) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_NULL();
	}

	attrp = xmlHasNsProp(nodep, (xmlChar *)name, NULL);
	if (attrp == NULL || attrp->type == XML_ATTRIBUTE_DECL) {
		php_dom_throw_error(NOT_FOUND_ERR, dom_get_strict_error(intern->document));
	} else {
		php_set_attribute_id(attrp, is_id);
	}

	RETURN_NULL();
}
/* }}} end dom_element_set_id_attribute */

/* {{{ proto void dom_element_set_id_attribute_ns(string namespaceURI, string localName, bool isId);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElSetIdAttrNS
Since: DOM Level 3
*/
PHP_FUNCTION(dom_element_set_id_attribute_ns)
{
	zval *id;
	xmlNodePtr elemp;
	xmlAttrPtr attrp;
	dom_object *intern;
	size_t uri_len, name_len;
	char *uri, *name;
	zend_bool is_id;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "ssb", &uri, &uri_len, &name, &name_len, &is_id) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(elemp, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(elemp) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_NULL();
	}

	attrp = xmlHasNsProp(elemp, (xmlChar *)name, (xmlChar *)uri);
	if (attrp == NULL || attrp->type == XML_ATTRIBUTE_DECL) {
		php_dom_throw_error(NOT_FOUND_ERR, dom_get_strict_error(intern->document));
	} else {
		php_set_attribute_id(attrp, is_id);
	}

	RETURN_NULL();
}
/* }}} end dom_element_set_id_attribute_ns */

/* {{{ proto void dom_element_set_id_attribute_node(attr idAttr, bool isId);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#core-ID-ElSetIdAttrNode
Since: DOM Level 3
*/
PHP_FUNCTION(dom_element_set_id_attribute_node)
{
	zval *id, *node;
	xmlNode *nodep;
	xmlAttrPtr attrp;
	dom_object *intern, *attrobj;
	zend_bool is_id;

	id = ZEND_THIS;
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "Ob", &node, dom_attr_class_entry, &is_id) == FAILURE) {
		return;
	}

	DOM_GET_OBJ(nodep, id, xmlNodePtr, intern);

	if (dom_node_is_read_only(nodep) == SUCCESS) {
		php_dom_throw_error(NO_MODIFICATION_ALLOWED_ERR, dom_get_strict_error(intern->document));
		RETURN_NULL();
	}

	DOM_GET_OBJ(attrp, node, xmlAttrPtr, attrobj);

	if (attrp->parent != nodep) {
		php_dom_throw_error(NOT_FOUND_ERR, dom_get_strict_error(intern->document));
	} else {
		php_set_attribute_id(attrp, is_id);
	}

	RETURN_NULL();
}
/* }}} end dom_element_set_id_attribute_node */

#endif
