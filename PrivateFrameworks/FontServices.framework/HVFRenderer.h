/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@class NSData;

@interface HVFRenderer : NSObject {

	unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer> >* renderer;
	NSData* hvfb;

}

@property (nonatomic,retain) NSData * hvfb; 
-(id)initWithLoader:(HVFLoaderImpl*)arg1 ;
-(NSData *)hvfb;
-(id)initWithTableData:(id)arg1 ;
-(unsigned)countParts;
-(BOOL)renderPartAtIndex:(unsigned)arg1 transform:(id)arg2 toContext:(/*^block*/id)arg3 ;
-(BOOL)renderPartAtIndex:(unsigned)arg1 toContext:(/*^block*/id)arg2 ;
-(void)setHvfb:(NSData *)arg1 ;
@end

