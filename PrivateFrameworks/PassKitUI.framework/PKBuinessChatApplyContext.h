/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class NSString;

@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext> {

	NSString* _identifier;
	long long _intent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyText;
-(BOOL)requiresAuthorization;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
-(id)initWithIdentifier:(id)arg1 intent:(long long)arg2 ;
@end

