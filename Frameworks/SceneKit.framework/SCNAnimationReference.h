/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAAnimationGroup.h>

@class NSString;

@interface SCNAnimationReference : CAAnimationGroup {

	NSString* referenceName;

}

@property (nonatomic,copy) NSString * referenceName; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isAReference;
-(void)setReferenceName:(NSString *)arg1 ;
-(NSString *)referenceName;
@end

