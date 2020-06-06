/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying, BSDescriptionProviding> {

	float _zoomFactor;
	NSString* _name;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float zoomFactor;                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentMagnifyMode;
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(float)zoomFactor;
-(void)setZoomFactor:(float)arg1 ;
@end

