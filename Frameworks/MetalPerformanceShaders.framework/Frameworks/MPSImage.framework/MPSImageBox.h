/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageBox : MPSUnaryImageKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned filterInfoH;
	unsigned filterInfoV;
	MPSImageConvolution* hPass;
	MPSImageConvolution* vPass;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(void)initFilterInfo;
@end

