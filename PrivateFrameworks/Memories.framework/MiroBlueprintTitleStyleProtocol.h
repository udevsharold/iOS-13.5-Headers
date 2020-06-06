/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MiroBlueprintTitleStyleProtocol <NSObject>
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) NSDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * titleAndAnimationStyleDescription; 
@property (nonatomic,readonly) BOOL titleRequestsColorAnalysis; 
@required
-(NSString *)fontName;
-(NSString *)effectID;
-(NSString *)titleAndAnimationStyleDescription;
-(NSDictionary *)parametersDictionary;
-(BOOL)titleRequestsColorAnalysis;

@end

