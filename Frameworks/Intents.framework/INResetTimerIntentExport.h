/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTimer, NSNumber;


@protocol INResetTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * resetMultiple; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(NSNumber *)resetMultiple;
-(void)setResetMultiple:(id)arg1;

@end

