/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXButtonComponent.h>
@class NSString;


@protocol SXButtonComponent <SXComponent,SXConditionalButtonComponentProperties>
@property (nonatomic,readonly) NSString * text; 
@required
-(NSString *)text;

@end


@class NSString, SXJSONArray, SXComponentAnimation, SXComponentConditions, SXJSONDictionary, SXComponentClassification;

@interface SXButtonComponent : SXComponent <SXButtonComponent>

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
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) id<SXAction> action; 
@property (nonatomic,readonly) NSString * text; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(NSString *)text;
-(id<SXAction>)action;
-(NSString *)textStyle;
@end

