/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDocumentProviding.h>

@class SXDocument, NSString;

@interface SXDocumentProvider : NSObject <SXDocumentProviding> {

	SXDocument* _document;

}

@property (nonatomic,retain) SXDocument * document;                 //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDocument:(SXDocument *)arg1 ;
-(SXDocument *)document;
@end

