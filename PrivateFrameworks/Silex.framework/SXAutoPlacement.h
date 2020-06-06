/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAutoPlacement <NSObject>
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
@required
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;

@end


@class NSString;

@interface SXAutoPlacement : SXJSONObject <SXAutoPlacement>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id<SXAdvertisementPlacementType>)advertisement;
-(NSString *)description;
@end

