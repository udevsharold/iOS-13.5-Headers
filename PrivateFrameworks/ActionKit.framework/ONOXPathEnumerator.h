/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration> {

	xmlXPathObject* _xmlXPath;
	unsigned long long _cursor;
	ONOXMLDocument* _document;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;               //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (assign,nonatomic) unsigned long long cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,retain) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
-(void)dealloc;
-(id)objectAtIndex:(long long)arg1 ;
-(id)nextObject;
-(id)allObjects;
-(unsigned long long)cursor;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(void)setCursor:(unsigned long long)arg1 ;
-(ONOXMLDocument *)document;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

