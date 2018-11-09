function [x,y,distance] = distance_btw_point_line(point, p1, p2)
%
%[x,y,distance] = distance_point_btw_line([0,0],[0,-4],[-4,0])
%Results:
%x = -2
%y = -2
%distance =  2.8284

    x1 = p1(1); y1 = p1(2);
    x2 = p2(1); y2 = p2(2);
    xp = point(1); yp = point(2);
    
    Mo = (y2-y1)/(x2-x1); %(slope of line between p1 to p2)
    Mn = -Mo;
    
    K1=Mo*x1-y1;
    
    K2=Mn*xp-yp;
    
    x = (K1-K2)/(2*Mo);
    
    y = Mo*(-K1-K2)/(2*Mo);
    
    distance = sqrt((xp-x)^2+(yp-y)^2);    
end 
