/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@class NSDictionary, NFWeakReference, NFApplet, NSString;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {

	NSDictionary* _appletsById;
	NFWeakReference* _delegate;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;

}

@property (assign) id<NFContactlessSessionDelegate> delegate; 
@property (readonly) NFApplet * activeApplet;                              //@synthesize activeApplet=_activeApplet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NFContactlessSessionDelegate>)delegate;
-(void)setDelegate:(id<NFContactlessSessionDelegate>)arg1 ;
-(void)endSession;
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(id)appletWithIdentifier:(id)arg1 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)allApplets;
-(void)didEndUnexpectedly;
-(void)didStartSession:(id)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(BOOL)setActiveApplet:(id)arg1 error:(id*)arg2 ;
-(BOOL)startCardEmulation:(id*)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(BOOL)setActiveApplet:(NFApplet *)arg1 ;
-(BOOL)startCardEmulation;
@end

