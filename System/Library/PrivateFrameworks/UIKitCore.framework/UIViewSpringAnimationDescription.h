/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI129 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI129 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI129)arg1 ;
-(SCD_Struct_UI129)parameters;
-(void)setParameters:(SCD_Struct_UI129)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(double)tension;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
-(void)setTension:(double)arg1 ;
@end
