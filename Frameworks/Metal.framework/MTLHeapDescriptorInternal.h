/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLHeapDescriptor.h>

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {

	MTLHeapDescriptorPrivate* _private;

}

@property (assign,nonatomic) unsigned long long sparsePageSize; 
@property (assign,nonatomic) BOOL sparsePageAccessCountersEnabled; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)resourceOptions;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(const MTLHeapDescriptorPrivate*)descriptorPrivate;
-(unsigned long long)sparsePageSize;
-(void)setSparsePageSize:(unsigned long long)arg1 ;
-(BOOL)sparsePageAccessCountersEnabled;
-(void)setSparsePageAccessCountersEnabled:(BOOL)arg1 ;
@end

