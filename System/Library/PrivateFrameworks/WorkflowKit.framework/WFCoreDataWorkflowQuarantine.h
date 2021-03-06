/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject

@property (nonatomic,copy) NSDate * importDate; 
@property (nonatomic,copy) NSString * sourceAppIdentifier; 
@property (nonatomic,retain) WFCoreDataWorkflow * workflow; 
+(id)fetchRequest;
@end

