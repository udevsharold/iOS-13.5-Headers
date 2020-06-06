/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXStoreFrontProvider.h>

@protocol FCAppleAccount;
@class NSString;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider> {

	id<FCAppleAccount> _appleAccount;

}

@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
-(NSString *)storeFrontIdentifier;
-(id)initWithAppleAccount:(id)arg1 ;
-(id<FCAppleAccount>)appleAccount;
@end

