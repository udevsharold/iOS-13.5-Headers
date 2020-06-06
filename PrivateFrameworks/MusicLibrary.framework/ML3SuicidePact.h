/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) BOOL isSigned; 
+(id)sharedPact;
-(id)init;
-(void)dealloc;
-(void)execute;
-(BOOL)isSigned;
-(void)signForReason:(long long)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(long long)arg1 ;
-(BOOL)isSignedForReason:(long long)arg1 ;
@end

