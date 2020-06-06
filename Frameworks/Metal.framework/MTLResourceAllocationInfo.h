/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>

@property (readonly) NSString * memoryPool; 
@property (readonly) unsigned long long virtualSize; 
@property (readonly) unsigned long long residentSize; 
@property (readonly) unsigned long long dirtySize; 
@property (readonly) BOOL pageoffRequired; 
@property (readonly) BOOL purgeable; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

