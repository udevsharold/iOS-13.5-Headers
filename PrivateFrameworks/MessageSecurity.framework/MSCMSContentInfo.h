/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSMessage.h>

@protocol MSCMSMessage;
@class NSData, MSOID, NSString;

@interface MSCMSContentInfo : NSObject <MSMessage> {

	NSData* _content;
	id<MSCMSMessage> _embeddedContent;
	MSOID* _contentType;

}

@property (retain) NSData * content;                                //@synthesize content=_content - In the implementation block
@property (retain) id<MSCMSMessage> embeddedContent;                //@synthesize embeddedContent=_embeddedContent - In the implementation block
@property (retain) MSOID * contentType;                             //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MSOID *)contentType;
-(void)setContentType:(MSOID *)arg1 ;
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
-(id)encodeMessageSecurityObject:(id*)arg1 ;
-(void)setEmbeddedContent:(id<MSCMSMessage>)arg1 ;
-(id<MSCMSMessage>)embeddedContent;
-(id)initWithEmbeddedContent:(id)arg1 ;
-(id)initWithDataContent:(id)arg1 ;
@end

