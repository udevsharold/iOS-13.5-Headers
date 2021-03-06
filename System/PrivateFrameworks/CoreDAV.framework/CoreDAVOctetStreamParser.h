/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSMutableData, NSError, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {

	NSMutableData* _octetStreamData;
	NSError* _parserError;

}

@property (nonatomic,retain) NSMutableData * octetStreamData;              //@synthesize octetStreamData=_octetStreamData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(NSMutableData *)octetStreamData;
-(void)setOctetStreamData:(NSMutableData *)arg1 ;
@end

