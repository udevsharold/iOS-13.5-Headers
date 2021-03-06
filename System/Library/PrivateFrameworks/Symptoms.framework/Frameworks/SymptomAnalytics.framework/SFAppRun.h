/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, SFApp;

@interface SFAppRun : NSManagedObject

@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,copy) NSDate * timeEnd; 
@property (nonatomic,copy) NSDate * timeStart; 
@property (nonatomic,copy) NSNumber * wifiIN_end; 
@property (nonatomic,copy) NSNumber * wifiIN_start; 
@property (nonatomic,copy) NSNumber * wifiOUT_end; 
@property (nonatomic,copy) NSNumber * wifiOUT_start; 
@property (nonatomic,copy) NSNumber * wiredIN_end; 
@property (nonatomic,copy) NSNumber * wiredIN_start; 
@property (nonatomic,copy) NSNumber * wiredOUT_end; 
@property (nonatomic,copy) NSNumber * wiredOUT_start; 
@property (nonatomic,copy) NSNumber * wwanIN_end; 
@property (nonatomic,copy) NSNumber * wwanIN_start; 
@property (nonatomic,copy) NSNumber * wwanOUT_end; 
@property (nonatomic,copy) NSNumber * wwanOUT_start; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)fetchRequest;
+(id)entityName;
@end

