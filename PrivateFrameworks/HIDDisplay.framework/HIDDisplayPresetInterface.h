/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary, NSArray;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;
	NSArray* _presets;

}

@property (readonly) NSArray * presets;              //@synthesize presets=_presets - In the implementation block
-(id)capabilities;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(NSArray *)presets;
-(id)getHIDDevices;
-(id)initWithMatching:(id)arg1 ;
-(BOOL)setupPresets;
-(void)createPresets;
-(id)getHIDElementForUsage:(long long)arg1 ;
-(long long)getFactoryDefaultPresetIndex:(id*)arg1 ;
-(long long)getActivePresetIndex:(id*)arg1 ;
-(BOOL)setActivePresetIndex:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setCurrentPresetIndex:(long long)arg1 error:(id*)arg2 ;
-(long long)getCurrentPresetIndex:(id*)arg1 ;
@end

