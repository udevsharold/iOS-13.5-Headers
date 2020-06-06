/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXTabBarAppearance, SXFeedNavigationAppearance, SXJSONDictionary;

@interface SXMetaData : SXJSONObject

@property (nonatomic,readonly) BOOL transparentToolbar; 
@property (nonatomic,readonly) NSString * canonicalURL; 
@property (nonatomic,readonly) NSString * thumbnailImageIdentifier; 
@property (nonatomic,readonly) NSString * documentVersion; 
@property (nonatomic,readonly) SXTabBarAppearance * tabBarAppearance; 
@property (nonatomic,readonly) SXFeedNavigationAppearance * feedNavigationAppearance; 
@property (nonatomic,readonly) SXJSONDictionary * campaignData; 
@property (nonatomic,readonly) BOOL showNewsSubscribe; 
@property (nonatomic,readonly) BOOL suppressMoreFromPublisher; 
@property (nonatomic,readonly) BOOL suppressRelatedArticles; 
-(BOOL)suppressRelatedArticles;
-(BOOL)suppressMoreFromPublisher;
-(BOOL)showNewsSubscribe;
-(SXJSONDictionary *)campaignData;
-(SXFeedNavigationAppearance *)feedNavigationAppearance;
-(SXTabBarAppearance *)tabBarAppearance;
-(NSString *)documentVersion;
-(NSString *)thumbnailImageIdentifier;
-(NSString *)canonicalURL;
-(BOOL)transparentToolbar;
@end

