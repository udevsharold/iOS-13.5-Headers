/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct _NSZone* NSZoneRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGImage* CGImageRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct CVSMPTETime {
	short subframes;
	short subframeDivisor;
	unsigned counter;
	unsigned type;
	unsigned flags;
	short hours;
	short minutes;
	short seconds;
	short frames;
} CVSMPTETime;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV10;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct CGColor* CGColorRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;
