/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {

	long long _sourceWidth;
	long long _sourceHeight;
	double _centerX;
	double _centerY;
	double _size;

}
-(id)description;
-(id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5 ;
-(long long)photosFaceRepresentationSourceWidth;
-(long long)photosFaceRepresentationSourceHeight;
-(double)photosFaceRepresentationCenterX;
-(double)photosFaceRepresentationCenterY;
-(double)photosFaceRepresentationSize;
-(double)photosFaceRepresentationBlurScore;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(long long)photosFaceRepresentationQualityMeasure;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(double)photosFaceRepresentationQuality;
@end

