/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIKeyboardKeyBehaviors : NSObject {

	unsigned long long _spaceKeyBehavior;
	unsigned long long _returnKeyBehavior;
	unsigned long long _tabKeyBehavior;

}

@property (assign,nonatomic) unsigned long long spaceKeyBehavior;               //@synthesize spaceKeyBehavior=_spaceKeyBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long returnKeyBehavior;              //@synthesize returnKeyBehavior=_returnKeyBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long tabKeyBehavior;                 //@synthesize tabKeyBehavior=_tabKeyBehavior - In the implementation block
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 ;
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 forTabKey:(unsigned long long)arg3 ;
-(unsigned long long)spaceKeyBehavior;
-(unsigned long long)returnKeyBehavior;
-(unsigned long long)tabKeyBehavior;
-(id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 tabKeyBehavior:(unsigned long long)arg3 ;
-(void)setSpaceKeyBehavior:(unsigned long long)arg1 ;
-(void)setReturnKeyBehavior:(unsigned long long)arg1 ;
-(void)setTabKeyBehavior:(unsigned long long)arg1 ;
@end

