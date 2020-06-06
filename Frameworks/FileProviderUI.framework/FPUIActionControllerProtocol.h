/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol FPUIActionControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * actionIdentifier; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * domainIdentifier; 
@required
+(id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;
-(NSString *)domainIdentifier;
-(NSString *)providerIdentifier;
-(NSArray *)items;
-(NSString *)actionIdentifier;

@end

