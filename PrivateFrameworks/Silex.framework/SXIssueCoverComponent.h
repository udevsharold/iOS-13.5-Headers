/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXIssueCoverComponent.h>
@class NSString;


@protocol SXIssueCoverComponent <SXComponent>
@property (nonatomic,readonly) NSString * issueIdentifier; 
@property (nonatomic,readonly) BOOL videoPlaybackEnabled; 
@required
-(NSString *)issueIdentifier;
-(BOOL)videoPlaybackEnabled;

@end


@class NSString, SXJSONArray, SXComponentAnimation, SXComponentConditions, SXJSONDictionary, SXComponentClassification;

@interface SXIssueCoverComponent : SXComponent <SXIssueCoverComponent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSString * issueIdentifier; 
@property (nonatomic,readonly) BOOL videoPlaybackEnabled; 
+(id)typeString;
-(BOOL)videoPlaybackEnabled;
-(NSString *)issueIdentifier;
-(BOOL)videoPlaybackEnabledWithValue:(id)arg1 withType:(int)arg2 ;
@end

