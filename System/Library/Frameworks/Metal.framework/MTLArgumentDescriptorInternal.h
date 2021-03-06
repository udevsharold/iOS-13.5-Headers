/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(unsigned long long)textureType;
-(unsigned long long)access;
-(unsigned long long)dataType;
-(unsigned long long)arrayLength;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
@end

