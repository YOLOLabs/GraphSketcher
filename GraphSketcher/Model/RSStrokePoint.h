// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Header: svn+ssh://source.omnigroup.com/Source/svn/Omni/trunk/OmniGroup/Applications/OmniGraphSketcher/Model/RSStrokePoint.h 200244 2013-12-10 00:11:55Z correia $

#import <OmniFoundation/OFObject.h>


@interface RSStrokePoint : OFObject {
    CGPoint _point;
    double _time;
}

+ (id)strokePointWithPoint:(CGPoint)p time:(double)t;
- (id)initWithPoint:(CGPoint)p time:(double)t;

- (CGPoint)point;
- (CGFloat)pointx;
- (CGFloat)pointy;
- (double)time;

@end
