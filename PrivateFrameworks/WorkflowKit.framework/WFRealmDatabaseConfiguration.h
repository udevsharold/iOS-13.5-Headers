/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RLMRealmConfiguration;

@interface WFRealmDatabaseConfiguration : NSObject {

	RLMRealmConfiguration* _realmConfiguration;

}

@property (nonatomic,readonly) RLMRealmConfiguration * realmConfiguration;              //@synthesize realmConfiguration=_realmConfiguration - In the implementation block
+(id)systemShortcutsConfiguration;
+(id)inMemoryConfiguration;
+(id)inMemoryConfigurationWithIdentifier:(id)arg1 ;
-(RLMRealmConfiguration *)realmConfiguration;
@end

