/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDropProposal.h>

@interface UICollectionViewDropProposal : UIDropProposal {

	long long _intent;

}

@property (assign,nonatomic) long long intent;              //@synthesize intent=_intent - In the implementation block
-(id)description;
-(long long)intent;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2 ;
-(id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2 ;
-(long long)dropLocation;
-(void)setIntent:(long long)arg1 ;
@end
