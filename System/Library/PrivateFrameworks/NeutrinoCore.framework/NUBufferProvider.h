/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NUPixelFormat;


@protocol NUBufferProvider <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@required
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(void)provideBuffer:(/*^block*/id)arg1;

@end

