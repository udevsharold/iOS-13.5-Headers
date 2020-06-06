/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CIFilterShape : NSObject <NSCopying> {

	unsigned _pad;
	void* _priv;

}

@property (readonly) CGRect extent; 
+(id)_shapeInfinite;
+(id)shapeWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(CGRect)extent;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithStruct:(filterShape*)arg1 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(BOOL)arg2 ;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)unionWith:(id)arg1 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
@end

