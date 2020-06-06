/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface CKAppliedAnimationContext : NSObject {

	CALayer* _targetLayer;
	NSString* _key;

}

@property (nonatomic,readonly) CALayer * targetLayer;              //@synthesize targetLayer=_targetLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(id)initWithTargetLayer:(id)arg1 key:(id)arg2 ;
-(CALayer *)targetLayer;
@end

