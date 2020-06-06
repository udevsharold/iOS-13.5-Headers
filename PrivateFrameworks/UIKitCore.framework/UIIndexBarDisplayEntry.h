/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIIndexBarEntry;

@interface UIIndexBarDisplayEntry : NSObject {

	UIIndexBarEntry* _entry;
	long long _entryIndex;
	long long _displayEntryIndex;

}

@property (nonatomic,retain) UIIndexBarEntry * entry;                  //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic) long long entryIndex;                     //@synthesize entryIndex=_entryIndex - In the implementation block
@property (assign,nonatomic) long long displayEntryIndex;              //@synthesize displayEntryIndex=_displayEntryIndex - In the implementation block
-(id)description;
-(UIIndexBarEntry *)entry;
-(void)setEntry:(UIIndexBarEntry *)arg1 ;
-(long long)entryIndex;
-(void)setEntryIndex:(long long)arg1 ;
-(long long)displayEntryIndex;
-(void)setDisplayEntryIndex:(long long)arg1 ;
@end

