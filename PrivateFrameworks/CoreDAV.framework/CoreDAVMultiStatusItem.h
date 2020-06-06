/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {

	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,readonly) NSSet * responses; 
@property (nonatomic,retain) NSMutableArray * orderedResponses;                  //@synthesize orderedResponses=_orderedResponses - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(void)addResponse:(id)arg1 ;
-(NSSet *)responses;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
-(NSMutableArray *)orderedResponses;
-(void)setOrderedResponses:(NSMutableArray *)arg1 ;
@end

