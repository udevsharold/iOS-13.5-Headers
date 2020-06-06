/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BKSAnimationFenceHandle;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _avoidIntersectability;
	BOOL _keyboardOnScreen;
	BOOL _shouldTakeSnapshot;
	NSString* _sourceCanvasIdentifier;
	NSString* _sourceDisplayIdentifier;
	BKSAnimationFenceHandle* _animationFence;
	CGRect _keyboardPosition;
	CGRect _keyboardPositionWithIAV;

}

@property (copy,readonly) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) CGRect keyboardPosition;                                    //@synthesize keyboardPosition=_keyboardPosition - In the implementation block
@property (readonly) CGRect keyboardPositionWithIAV;                             //@synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV - In the implementation block
@property (readonly) BOOL keyboardOnScreen;                                      //@synthesize keyboardOnScreen=_keyboardOnScreen - In the implementation block
@property (readonly) BOOL avoidIntersectability;                                 //@synthesize avoidIntersectability=_avoidIntersectability - In the implementation block
@property (assign,nonatomic) BOOL shouldTakeSnapshot;                            //@synthesize shouldTakeSnapshot=_shouldTakeSnapshot - In the implementation block
@property (nonatomic,copy) NSString * sourceCanvasIdentifier;                    //@synthesize sourceCanvasIdentifier=_sourceCanvasIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceDisplayIdentifier;                   //@synthesize sourceDisplayIdentifier=_sourceDisplayIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)animationFence;
+(id)informationForKeyboardDown;
+(id)informationForKeyboardUp:(CGRect)arg1 withIAV:(CGRect)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(CGRect)keyboardPosition;
-(NSString *)sourceCanvasIdentifier;
-(BOOL)keyboardOnScreen;
-(NSString *)sourceDisplayIdentifier;
-(void)resetAnimationFencing;
-(BOOL)shouldTakeSnapshot;
-(CGRect)keyboardPositionWithIAV;
-(void)setSourceCanvasIdentifier:(NSString *)arg1 ;
-(void)setSourceDisplayIdentifier:(NSString *)arg1 ;
-(void)setShouldTakeSnapshot:(BOOL)arg1 ;
-(BOOL)avoidIntersectability;
-(id)copyWithIntersectability:(BOOL)arg1 ;
-(id)initWithKeyboardRect:(CGRect)arg1 iavPosition:(CGRect)arg2 onScreen:(BOOL)arg3 takeSnapshot:(BOOL)arg4 fence:(id)arg5 ;
-(id)copyWithoutIAV;
-(id)copyWithoutFence;
@end

