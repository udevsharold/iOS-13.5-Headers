/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItemPhoto;
#import <MapKit/MapKit-Structs.h>
@class NSString, NSURL;

@interface MKMapItemPhoto : NSObject {

	NSString* _title;
	NSString* _subtitle;
	id<GEOMapItemPhoto> _geoMapItemPhoto;

}

@property (nonatomic,retain) id<GEOMapItemPhoto> geoMapItemPhoto;               //@synthesize geoMapItemPhoto=_geoMapItemPhoto - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * license; 
@property (nonatomic,readonly) NSURL * largestPhotoURL; 
@property (nonatomic,readonly) NSString * photoID; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) long long format; 
@property (nonatomic,readonly) BOOL displayFullScreenPhotoGallery; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)format;
-(NSString *)subtitle;
-(NSString *)license;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithPictureItem:(id)arg1 ;
-(BOOL)displayFullScreenPhotoGallery;
-(BOOL)useGallery;
-(NSURL *)largestPhotoURL;
-(id)initWithGeoMapItemPhoto:(id)arg1 ;
-(id)urlForBestPhotoForSize:(CGSize)arg1 ;
-(NSString *)photoID;
-(id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(id<GEOMapItemPhoto>)geoMapItemPhoto;
-(void)setGeoMapItemPhoto:(id<GEOMapItemPhoto>)arg1 ;
@end

