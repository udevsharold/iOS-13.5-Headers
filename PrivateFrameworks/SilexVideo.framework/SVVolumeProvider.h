/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVolumeProviding.h>
#import <libobjc.A.dylib/SVVolumeReporting.h>

@class NSHashTable, NSString;

@interface SVVolumeProvider : NSObject <SVVolumeProviding, SVVolumeReporting> {

	BOOL _muted;
	float _volume;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
-(NSHashTable *)observers;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithMuteState:(BOOL)arg1 volume:(float)arg2 ;
-(void)addVolumeObserver:(id)arg1 ;
-(void)removeVolumeObserver:(id)arg1 ;
@end

