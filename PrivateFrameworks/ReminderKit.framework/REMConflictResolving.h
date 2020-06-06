/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class REMResolutionTokenMap;


@protocol REMConflictResolving
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@required
-(id)changedKeys;
-(id)resolutionTokenKeyForChangedKey:(id)arg1;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setResolutionTokenMap:(id)arg1;

@end

