/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBFWindow, NSMutableOrderedSet, NSString;

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding> {

	SBFWindow* _expectedKeyWindow;
	NSMutableOrderedSet* _windowStack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)noteWindowDeallocated:(id)arg1 ;
-(void)popKeyWindow:(id)arg1 ;
-(BOOL)pushKeyWindow:(id)arg1 ;
-(void)noteWindowHidden:(id)arg1 ;
-(void)noteWindowUnhidden:(id)arg1 ;
-(void)_keyWindowDidChangeNotification:(id)arg1 ;
-(id)_evaluateForNewKeyWindowWithReason:(id)arg1 ;
-(void)popKeyWindow:(id)arg1 reason:(id)arg2 ;
-(BOOL)_isWindowEligibleForKeyness:(id)arg1 ;
-(id)expectedKeyWindow;
@end

