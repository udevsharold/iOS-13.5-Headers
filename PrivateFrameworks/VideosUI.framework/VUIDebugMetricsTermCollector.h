/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIDebugMetricsTermCollector.h>
@class NSDictionary, NSArray;


@protocol VUIDebugMetricsTermCollector <NSObject>
@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
@required
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;

@end


@class NSDictionary, NSArray, NSString;

@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * primaryTerms; 
@property (nonatomic,readonly) NSArray * baseTerms; 
@property (nonatomic,readonly) NSArray * metricsKitTerms; 
@property (nonatomic,readonly) NSArray * filteredTerms; 
-(id)searchTerms;
-(id)pageTerms;
-(id)clickTerms;
-(id)impressionsTerms;
-(id)enterTerms;
-(id)exitTerms;
-(id)accountTerms;
-(id)pageRenderTerms;
-(NSDictionary *)primaryTerms;
-(NSArray *)baseTerms;
-(NSArray *)metricsKitTerms;
-(NSArray *)filteredTerms;
-(id)dialogTerms;
@end

