/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange, NSNumber;


@protocol INSnoozeTasksIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,copy) INDateComponentsRange * nextTriggerTime; 
@property (nonatomic,copy) NSNumber * all; 
@required
-(id)init;
-(NSNumber *)all;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(id)arg1;
-(void)setAll:(id)arg1;

@end

