/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKBTree;

@interface UIKBKeyInterval : NSObject {

	UIKBTree* _key;
	double _interval;

}

@property (nonatomic,retain) UIKBTree * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double interval;              //@synthesize interval=_interval - In the implementation block
-(void)dealloc;
-(UIKBTree *)key;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setKey:(UIKBTree *)arg1 ;
-(id)initWithKey:(id)arg1 interval:(double)arg2 ;
@end

