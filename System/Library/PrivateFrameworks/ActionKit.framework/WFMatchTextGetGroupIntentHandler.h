/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFMatchTextGetGroupIntentHandling.h>

@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMatchTextGetGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMatchesForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTypeForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveGroupIndexForMatchTextGetGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)matchedTextInString:(id)arg1 withResult:(id)arg2 atIndex:(long long)arg3 ;
@end

