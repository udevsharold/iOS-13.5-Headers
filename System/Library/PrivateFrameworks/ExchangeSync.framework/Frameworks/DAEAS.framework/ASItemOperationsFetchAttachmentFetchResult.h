/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, ASItemOperationsFetchAttachmentProperties;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem {

	NSNumber* _status;
	NSString* _fileReference;
	ASItemOperationsFetchAttachmentProperties* _properties;

}

@property (nonatomic,retain) NSNumber * status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * fileReference;                                            //@synthesize fileReference=_fileReference - In the implementation block
@property (nonatomic,retain) ASItemOperationsFetchAttachmentProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)status;
-(ASItemOperationsFetchAttachmentProperties *)properties;
-(void)setProperties:(ASItemOperationsFetchAttachmentProperties *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setFileReference:(NSString *)arg1 ;
-(NSString *)fileReference;
@end

