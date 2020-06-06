/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoFaceLandmarkDetector : NSObject {

	vImage_Buffer* crop_scaled;
	vImage_Buffer* crop_192;
	shared_ptr<Espresso::net>* net;
	shared_ptr<Espresso::net>* net_detect;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* nets_sub_landmark;
	CGRect _newface;

}

@property (assign) CGRect newface;              //@synthesize newface=_newface - In the implementation block
-(id)init;
-(void)dealloc;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 doFaceRectFix:(BOOL)arg4 ;
-(CGRect)newface;
-(id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)extractSubLandmarksFromCrop192:(vImage_Buffer*)arg1 centers192:(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)arg2 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detectInImageRect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 ;
-(id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)commonInit:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)setNewface:(CGRect)arg1 ;
@end

