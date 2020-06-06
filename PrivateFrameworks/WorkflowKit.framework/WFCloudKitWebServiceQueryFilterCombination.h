/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter {

	NSArray* _filters;
	unsigned long long _type;

}

@property (nonatomic,retain) NSArray * filters;                    //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

