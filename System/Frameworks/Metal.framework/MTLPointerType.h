/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long dataSize; 
@property (readonly) BOOL elementIsArgumentBuffer; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
@end

