/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface TDAbstractLayerReference : NSManagedObject {

	CGRect _frameRect;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * frameRectString; 
@property (assign,nonatomic) CGRect frameRect; 
@property (nonatomic,retain) NSNumber * opacity; 
@property (nonatomic,retain) NSNumber * blendMode; 
@property (assign,nonatomic) BOOL makeOpaqueIfPossible; 
@property (assign,nonatomic) CGRect primitiveFrameRect; 
-(void)awakeFromFetch;
-(CGRect)frameRect;
-(CGRect)primitiveFrameRect;
-(void)setPrimitiveFrameRect:(CGRect)arg1 ;
-(void)setFrameRect:(CGRect)arg1 ;
@end

